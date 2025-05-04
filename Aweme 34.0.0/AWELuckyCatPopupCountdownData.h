@interface AWELuckyCatPopupCountdownData : MTLModel
@property (nonatomic) AWELuckyCatPopupCountDown countdown;
@property (nonatomic) AWELuckyCatPopupText text;
@property (nonatomic) AWELuckyCatPopupSpaceModel space;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)space;
- (id)countdown;
- (void)setCountdown:;
- (void)setSpace:;
+ (id)countdownJSONTransformer;
+ (id)spaceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;
@end
