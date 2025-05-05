@interface TTCheckVersionResponse : JSONModel
@property (nonatomic) NSString message;
@property (nonatomic) TTAppUpdateModel data;
- (void)setMessage:;
- (id)data;
- (id)message;
- (void).cxx_destruct;
- (void)setData:;
@end
