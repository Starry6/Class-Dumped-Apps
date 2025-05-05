@interface MFComposeTextStyle : NSObject
@property (nonatomic) NSString imageName;
@property (nonatomic) NSString accessibilityIdenitifier;
@property (nonatomic) : editSelector;
@property (nonatomic) q styleType;
- (id)imageName;
- (long long)styleType;
- (void).cxx_destruct;
- (id)initWithTextStyleType:;
- (id)accessibilityIdenitifier;
- (SEL)editSelector;
+ (id)composeTextStyleForTextStyleType:;
+ (id)imageNameForTextStyleType:;
+ (id)accessibilityIdenitifierForTextStyleType:;
+ (SEL)editSelectorForTextStyleType:;
+ (BOOL)isTextListStyleOrdered:;
@end
