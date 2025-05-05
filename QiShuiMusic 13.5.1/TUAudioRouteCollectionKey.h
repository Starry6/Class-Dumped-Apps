@interface TUAudioRouteCollectionKey : NSObject
@property (nonatomic) NSString category;
@property (nonatomic) NSString mode;
- (unsigned long long)hash;
- (BOOL)isEqualToAudioRouteCollectionKey:;
- (id)initWithCategory:mode:;
- (void).cxx_destruct;
- (id)description;
- (id)mode;
- (BOOL)isEqual:;
- (id)category;
- (id)copyWithZone:;
@end
