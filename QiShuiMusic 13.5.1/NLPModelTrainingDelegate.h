@interface NLPModelTrainingDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)modelTrainer:logMessage:;
- (BOOL)modelTrainerShouldStop:;
- (id)initWithLogHandler:;
@end
