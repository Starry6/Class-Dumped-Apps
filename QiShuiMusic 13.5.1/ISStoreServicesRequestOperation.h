@interface ISStoreServicesRequestOperation : ISOperation
@property (nonatomic) SSRequest request;
- (id)initWithRequest:;
- (void)cancel;
- (void)dealloc;
- (id)request;
- (void)run;
@end
