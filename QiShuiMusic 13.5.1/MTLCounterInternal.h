@interface MTLCounterInternal : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithName:description:;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
@end
