@interface AWEEccsFetchMessageReadsDataModel : IESLiveBridgeModel
@property (nonatomic) NSString status;
@property (nonatomic) NSString msg;
@property (nonatomic) @ readIndexInfo;
- (id)readIndexInfo;
- (void)setReadIndexInfo:;
- (void)setStatus:;
- (void).cxx_destruct;
- (id)status;
- (void)setMsg:;
- (id)msg;
+ (id)modelCustomPropertyMapper;
@end
