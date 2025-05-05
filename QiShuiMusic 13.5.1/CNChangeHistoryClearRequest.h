@interface CNChangeHistoryClearRequest : NSObject
@property (nonatomic) NSArray contactChangeIDs;
@property (nonatomic) NSArray groupChangeIDs;
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) CNChangeHistoryAnchor toChangeAnchor;
- (id)containerIdentifier;
- (id)initWithClientIdentifier:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setContainerIdentifier:;
- (id)description;
- (id)clientIdentifier;
- (id)toChangeAnchor;
- (void)setToChangeAnchor:;
- (id)contactChangeIDs;
- (void)setContactChangeIDs:;
- (id)groupChangeIDs;
- (void)setGroupChangeIDs:;
+ (BOOL)supportsSecureCoding;
@end
