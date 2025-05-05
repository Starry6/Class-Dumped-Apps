@interface UgenMessage : NSObject
@property (nonatomic) NSDictionary body;
@property (nonatomic) UgenWidget widget;
@property (nonatomic) NSString name;
- (void)setWidget:;
- (void)setName:;
- (id)widget;
- (id)body;
- (void)setBody:;
- (void).cxx_destruct;
- (id)name;
@end
