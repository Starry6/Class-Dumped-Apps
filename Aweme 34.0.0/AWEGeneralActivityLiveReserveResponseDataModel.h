@interface AWEGeneralActivityLiveReserveResponseDataModel : MTLModel
@property (nonatomic) q responseStatus;
@property (nonatomic) NSString message;
@property (nonatomic) NSString prompts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (id)message;
- (void)setResponseStatus:;
- (void).cxx_destruct;
- (long long)responseStatus;
- (void)setMessage:;
- (id)prompts;
- (void)setPrompts:;
+ (id)JSONKeyPathsByPropertyKey;
@end
