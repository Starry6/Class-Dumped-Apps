@interface MTLCounterSetInternal : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray counters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)counters;
- (id)initWithName:description:counters:;
@end
