@interface EFPathComponent : NSObject
@property (nonatomic) NSString sanitizedString;
@property (nonatomic) Q length;
@property (nonatomic) NSString pathExtension;
@property (nonatomic) EFPathComponent pathComponentByDeletingPathExtension;
- (id)initWithString:;
- (id)pathExtension;
- (unsigned long long)hash;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)length;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)sanitizedString;
- (id)subpathToIndex:;
- (id)pathComponentByDeletingPathExtension;
+ (id)pathComponentWithString:;
@end
