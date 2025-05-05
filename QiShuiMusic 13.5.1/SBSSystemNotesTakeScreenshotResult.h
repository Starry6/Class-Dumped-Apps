@interface SBSSystemNotesTakeScreenshotResult : NSObject
@property (nonatomic) FBSDisplayIdentity displayIdentity;
@property (nonatomic) BSMachPortSendRight machPortSendRight;
@property (nonatomic) double scale;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayIdentity;
- (void)encodeWithXPCDictionary:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (double)scale;
- (id)machPortSendRight;
- (id)initWithDisplay:sendRight:scale:;
@end
