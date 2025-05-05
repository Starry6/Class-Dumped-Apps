@interface IESECSliceXViewLoadStatus : NSObject
@property (nonatomic) UIView sliceXView;
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSliceXView:;
- (void)setSliceXView:;
- (id)sliceXView;
- (void)setError:;
- (id)error;
- (BOOL)success;
- (void)setSuccess:;
- (void).cxx_destruct;
@end
