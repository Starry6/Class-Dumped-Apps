@interface VKFeedbackAttachment : NSObject
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL isOptional;
- (BOOL)isOptional;
- (id)fileName;
- (id)label;
- (void).cxx_destruct;
- (id)initWithFileName:label:isOptional:;
@end
