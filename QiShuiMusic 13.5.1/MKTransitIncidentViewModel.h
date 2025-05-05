@interface MKTransitIncidentViewModel : NSObject
@property (nonatomic) NSString symbolName;
@property (nonatomic) NSString message;
@property (nonatomic) BOOL blocking;
@property (nonatomic) BOOL showImage;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor symbolColor;
- (id)symbolName;
- (id)symbolColor;
- (void)setMessage:;
- (id)backgroundColor;
- (void)setSymbolName:;
- (id)message;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)isBlocking;
- (void)setBlocking:;
- (BOOL)showImage;
- (void)setShowImage:;
@end
