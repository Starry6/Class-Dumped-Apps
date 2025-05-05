@interface SNResultsPrinter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)request:didFailWithError:;
- (void)request:didProduceResult:;
- (void)requestDidComplete:;
@end
