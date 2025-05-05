@interface BDHybridPageContext : NSObject
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) NSString simplePageIdentifier;
@property (nonatomic) NSString pageType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSimplePageIdentifier:;
- (id)simplePageIdentifier;
- (void)setSessionId:;
- (id)sessionId;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setPageType:;
- (id)pageType;
- (id)copyWithZone:;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
- (id)toDict;
+ (id)createFromPageId:type:;
+ (id)createFromPageId:type:session:;
@end
