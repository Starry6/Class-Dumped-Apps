@interface AWEIMPageStatusModel : NSObject
@property (nonatomic) q pageStatusType;
@property (nonatomic) NSString message;
- (id)initWithMessage:type:;
- (long long)pageStatusType;
- (id)message;
- (void).cxx_destruct;
@end
