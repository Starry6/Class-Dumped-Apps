@interface VCMediaKeyIndex : NSObject
@property (nonatomic) I activeSize;
- (id)initWithUUID:;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithNSUUID:;
- (BOOL)setMapping:;
- (BOOL)isValid;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithBytes:bufferSize:;
- (unsigned int)activeSize;
- (void)setActiveSize:;
- (void)setMapKey:;
- (id)MKI;
- (void)fullKeyBytes:;
- (unsigned int)mappedKeySize;
- (unsigned int)mappedKeyBytes:size:;
- (BOOL)isStartingWithPrefix:;
+ (id)newMKIWithBytes:bufferSize:;
+ (id)makeInvalidKey;
@end
