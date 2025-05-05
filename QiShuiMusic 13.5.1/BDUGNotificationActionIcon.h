@interface BDUGNotificationActionIcon : NSObject
@property (nonatomic) NSString templateImageName;
@property (nonatomic) NSString systemImageName;
- (void)setTemplateImageName:;
- (id)systemImageName;
- (void)setSystemImageName:;
- (void).cxx_destruct;
- (id)templateImageName;
+ (id)iconWithTemplateImageName:;
+ (id)iconWithSystemImageName:;
@end
