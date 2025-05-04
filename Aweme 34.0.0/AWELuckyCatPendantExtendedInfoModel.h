@interface AWELuckyCatPendantExtendedInfoModel : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) AWELuckyCatFeedRedirectModel feedRedirect;
@property (nonatomic) NSString taskType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedRedirect;
- (void)setFeedRedirect:;
- (id)taskType;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setTaskType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
