//
//  RecipeDetailViewController.h
//  Recipebook
//
//  Created by Sergei Kostevitch on 7/1/13.
//  Copyright (c) 2013 Sergei Kostevitch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeDetailViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *recipeLabel;
@property (nonatomic, strong) NSString *recipeName;

@end
