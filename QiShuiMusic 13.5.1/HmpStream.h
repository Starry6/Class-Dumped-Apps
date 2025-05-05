@interface HmpStream : NSObject
@property (nonatomic) ^v impl;
@property (nonatomic) BOOL own;
- (BOOL)own;
- (void)setOwn:;
- (id)initFromPtr::;
- (void)dealloc;
- (BOOL)query;
- (void)synchronize;
- (id)ptr;
- (id)impl;
- (void)setImpl:;
- (BOOL)isEqual:;
- (id)device;
+ (id)create:Flags:;
+ (id)current:;
+ (void)set_current:;
@end
