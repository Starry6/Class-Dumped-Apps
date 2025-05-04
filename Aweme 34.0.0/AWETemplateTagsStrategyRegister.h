@interface AWETemplateTagsStrategyRegister : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)strategyMap;
+ (BOOL)isValidRegisterItem:;
+ (void)registerItem:;
@end
