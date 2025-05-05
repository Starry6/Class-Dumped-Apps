@interface IMDaemonQuery : NSObject
@property (nonatomic) NSString ID;
@property (nonatomic) NSString key;
@property (nonatomic) NSDate startDate;
@property (nonatomic) @? completionHandler;
- (id)startDate;
- (id)ID;
- (id)key;
- (id)initWithID:key:completionHandler:;
- (void).cxx_destruct;
- (id)description;
- (id)completionHandler;
@end
