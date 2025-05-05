@interface IESPrefetchLoaderTriggerEvent : NSObject
@property (nonatomic) NSString occasion;
@property (nonatomic) NSString schema;
@property (nonatomic) double startTime;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)occasion;
- (void)setOccasion:;
- (id)schema;
- (id)init;
- (void)setStartTime:;
- (void)setError:;
- (id)error;
- (double)startTime;
- (void)setSchema:;
- (void).cxx_destruct;
@end
