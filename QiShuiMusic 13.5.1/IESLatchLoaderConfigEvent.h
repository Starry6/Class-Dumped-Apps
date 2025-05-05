@interface IESLatchLoaderConfigEvent : NSObject
@property (nonatomic) NSString project;
@property (nonatomic) double ioCost;
@property (nonatomic) BOOL latchPreferNativePrefetch;
@property (nonatomic) double startTime;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)project;
- (double)ioCost;
- (BOOL)latchPreferNativePrefetch;
- (void)setIoCost:;
- (void)setLatchPreferNativePrefetch:;
- (void)setProject:;
- (id)init;
- (void)setStartTime:;
- (void)setError:;
- (id)error;
- (double)startTime;
- (void).cxx_destruct;
@end
