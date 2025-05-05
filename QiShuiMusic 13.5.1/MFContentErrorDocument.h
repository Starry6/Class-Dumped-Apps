@interface MFContentErrorDocument : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSString content;
- (id)content;
- (id)error;
- (void).cxx_destruct;
- (id)initWithMimePart:;
@end
