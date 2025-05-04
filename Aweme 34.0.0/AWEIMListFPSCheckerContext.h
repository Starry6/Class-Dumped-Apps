@interface AWEIMListFPSCheckerContext : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString teaEventName;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) <IESIMConversationProtocol> con;
- (void)setExtra:;
- (id)con;
- (void)setCon:;
- (void)setTeaEventName:;
- (id)teaEventName;
- (void)setScene:;
- (unsigned long long)scene;
- (void)setEventName:;
- (id)extra;
- (void).cxx_destruct;
- (id)eventName;
@end
