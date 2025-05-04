@interface AWELeftSideBarShowPopViewTask : NSObject
@property (nonatomic) NSString businessID;
@property (nonatomic) NSString businessSubID;
@property (nonatomic) NSString popViewContent;
@property (nonatomic) double taskLifePeriod;
@property (nonatomic) double taskCreateTime;
@property (nonatomic) BOOL isExecuting;
- (id)popViewContent;
- (double)taskCreateTime;
- (double)taskLifePeriod;
- (id)businessSubID;
- (id)initWithBusinessID:businessSubID:popViewContent:taskLifePeriod:;
- (BOOL)canExecute;
- (void)setIsExecuting:;
- (BOOL)isExecuting;
- (id)businessID;
- (id)description;
- (void).cxx_destruct;
@end
