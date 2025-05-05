@interface FPProgressUpdater : NSObject
@property (nonatomic) FPProgressProxy progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProgress:;
- (id)progress;
- (void).cxx_destruct;
- (void)reportProgressUpdate:totalUnitCount:completedFileCount:totalFileCount:;
@end
