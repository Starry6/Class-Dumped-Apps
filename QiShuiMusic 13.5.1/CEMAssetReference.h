@interface CEMAssetReference : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSInteger assettype;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:assettype:;
- (int)assettype;
+ (id)referenceForIdentifier:assettype:;
+ (id)referenceForIdentifier:assetschematype:;
@end
