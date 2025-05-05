@interface BDUGLuckyActivityStageBaseResponse : NSObject
@property (nonatomic) BOOL getServerTimeFailed;
@property (nonatomic) NSString entryId;
@property (nonatomic) NSString resourceId;
@property (nonatomic) NSString cycleId;
- (id)entryId;
- (id)cycleId;
- (BOOL)getServerTimeFailed;
- (id)resourceId;
- (void)setCycleId:;
- (void)setEntryId:;
- (void)setGetServerTimeFailed:;
- (void)setResourceId:;
- (void).cxx_destruct;
@end
