@interface EKSerializableAttachment : EKSerializableObject
@property (nonatomic) NSURL urlOnDisk;
@property (nonatomic) NSString contentTypeFromServer;
- (void).cxx_destruct;
- (id)initWithAttachment:;
- (id)urlOnDisk;
- (id)createAttachment;
- (void)setUrlOnDisk:;
- (id)contentTypeFromServer;
- (void)setContentTypeFromServer:;
+ (id)classesForKey;
@end
