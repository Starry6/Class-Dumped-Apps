@interface IESPrefetchLoaderConfigEvent : NSObject
@property (nonatomic) NSString project;
@property (nonatomic) double startTime;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)project;
- (void)setProject:;
- (id)init;
- (void)setStartTime:;
- (void)setError:;
- (id)error;
- (double)startTime;
- (void).cxx_destruct;
@end
