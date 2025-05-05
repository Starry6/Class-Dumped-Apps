@interface PuzzleBridgeMethod : NSObject
@property (nonatomic) Q authType;
@property (nonatomic) @? handler;
@property (nonatomic) NSString methodName;
- (id)initWithMethodName:handler:authType:;
- (unsigned long long)authType;
- (id)handler;
- (void).cxx_destruct;
- (id)methodName;
@end
