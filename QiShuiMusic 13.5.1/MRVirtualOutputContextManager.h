@interface MRVirtualOutputContextManager : NSObject
@property (nonatomic) NSArray outputContext;
- (id)outputContext;
- (void).cxx_destruct;
- (id)fetchForUID:;
- (void)addOutputContext:;
- (void)removeOutputContext:;
+ (id)sharedManager;
@end
