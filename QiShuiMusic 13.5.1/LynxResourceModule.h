@interface LynxResourceModule : NSObject
@property (nonatomic) @ extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelResourcePrefetch:callback:;
- (id)cancelResourcePrefetchInternal:type:params:;
- (id)initWithLynxContext:;
- (void)requestResourcePrefetch:callback:;
- (id)requestResourcePrefetchInternal:type:params:;
- (id)resourcePrefetch:isCancel:allResults:;
- (void).cxx_destruct;
+ (id)methodLookup;
+ (id)name;
@end
