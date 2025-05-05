@interface IMSPIRecentEvent : NSObject
@property (nonatomic) NSString handle;
@property (nonatomic) NSString labelID;
@property (nonatomic) NSDate date;
- (id)handle;
- (void)setHandle:;
- (id)date;
- (void).cxx_destruct;
- (void)setLabelID:;
- (void)setDate:;
- (id)description;
- (id)labelID;
- (id)initWithHandle:date:;
- (id)initWithLabelID:date:;
@end
