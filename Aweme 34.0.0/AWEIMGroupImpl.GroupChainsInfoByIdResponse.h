@interface AWEIMGroupImpl.GroupChainsInfoByIdResponse : MTLModel
@property (nonatomic) _TtC14AWEIMGroupImpl16GroupChainsModel groupChains;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)groupChains;
- (void)setGroupChains:;
- (id)statusCode;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
