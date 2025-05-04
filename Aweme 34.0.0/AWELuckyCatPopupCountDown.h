@interface AWELuckyCatPopupCountDown : MTLModel
@property (nonatomic) NSNumber curTime;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) AWELuckyCatPopupText text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)curTime;
- (void)setCurTime:;
- (id)endTime;
- (void)setEndTime:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;
@end
