@interface WBSTabGroupIconRequest : WBSSiteMetadataRequest
@property (nonatomic) NSString tabGroupUUID;
@property (nonatomic) NSArray tabs;
@property (nonatomic) {CGSize=dd} sizeForDrawing;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uniqueIdentifier;
- (id)initWithTabGroup:;
- (unsigned long long)hash;
- (id)tabGroupUUID;
- (id)tabs;
- (id)sizeForDrawing;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
