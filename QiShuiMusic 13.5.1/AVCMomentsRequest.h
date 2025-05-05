@interface AVCMomentsRequest : NSObject
@property (nonatomic) NSObject<AVCMomentsRequestDelegate> delegate;
@property (nonatomic) C mode;
@property (nonatomic) NSString transactionID;
@property (nonatomic) C mediaType;
@property (nonatomic) NSString requesterID;
@property (nonatomic) NSString requesteeID;
- (id)transactionID;
- (unsigned char)mediaType;
- (BOOL)startWithError:;
- (void)dealloc;
- (void)setDelegate:;
- (BOOL)validateWithError:;
- (id)delegate;
- (id)requesterID;
- (id)description;
- (unsigned char)mode;
- (BOOL)rejectWithError:;
- (void)setMode:;
- (BOOL)endWithError:;
- (id)initWithMediaType:requesterID:requesteeID:;
- (id)initWithMediaType:requesterID:requesteeID:transactionID:;
- (id)requesteeID;
@end
