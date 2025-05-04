@interface AWEUserAnchorInfo : MTLModel
@property (nonatomic) BOOL masterSwitch;
@property (nonatomic) BOOL profileSwitch;
@property (nonatomic) NSString timeText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithMasterSwitch:profileSwitch:timeText:;
- (BOOL)masterSwitch;
- (BOOL)profileSwitch;
- (void).cxx_destruct;
- (id)timeText;
+ (id)JSONKeyPathsByPropertyKey;
@end
