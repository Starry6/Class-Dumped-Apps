@interface LNSuggestedAction : NSObject
@property (nonatomic) LNAction action;
@property (nonatomic) LNSystemProtocol systemProtocol;
@property (nonatomic) NSDictionary dialogParameters;
- (id)action;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithAction:systemProtocol:dialogParameters:;
- (id)systemProtocol;
- (id)dialogParameters;
+ (BOOL)supportsSecureCoding;
@end
