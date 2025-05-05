@interface ML3ClientImportItem : NSObject
@property (nonatomic) MIPMediaItem mediaItem;
@property (nonatomic) MIPMultiverseIdentifier multiverseIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)mediaItem;
- (id)multiverseIdentifier;
- (id)initWithMultiverseIdentifier:mediaItem:;
+ (BOOL)supportsSecureCoding;
@end
