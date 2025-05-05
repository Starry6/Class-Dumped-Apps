@interface IDLStorageImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setString:forKey:;
- (id)stringForKey:;
- (void)removeObjectForKey:;
@end
