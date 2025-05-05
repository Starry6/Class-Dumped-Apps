@interface SSVMediaContentTasteItem : NSObject
@property (nonatomic) Q contentType;
@property (nonatomic) NSString playlistGlobalID;
@property (nonatomic) q storeAdamID;
@property (nonatomic) Q tasteType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)playlistGlobalID;
- (id)copyXPCEncoding;
- (unsigned long long)contentType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)storeAdamID;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (unsigned long long)tasteType;
- (id)_copyWithMediaContentTasteItemClass:;
+ (BOOL)supportsSecureCoding;
@end
