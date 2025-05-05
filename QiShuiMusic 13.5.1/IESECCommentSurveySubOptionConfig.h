@interface IESECCommentSurveySubOptionConfig : MTLModel
@property (nonatomic) BOOL showInput;
@property (nonatomic) NSString inputPlaceHolder;
@property (nonatomic) NSArray subOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)inputPlaceHolder;
- (void)setInputPlaceHolder:;
- (void)setShowInput:;
- (void)setSubOptions:;
- (BOOL)showInput;
- (id)subOptions;
- (void).cxx_destruct;
+ (id)subOptionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
