@interface AWEOHRTouchActionModel : NSObject
@property (nonatomic) NSString actionType;
@property (nonatomic) NSString scene;
@property (nonatomic) double endPositionX;
@property (nonatomic) double endPositionY;
@property (nonatomic) double touchTimeS;
- (double)endPositionX;
- (void)setEndPositionX:;
- (double)endPositionY;
- (void)setEndPositionY:;
- (double)touchTimeS;
- (void)setTouchTimeS:;
- (id)actionType;
- (void)setActionType:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
@end
