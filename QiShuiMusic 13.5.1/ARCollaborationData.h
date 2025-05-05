@interface ARCollaborationData : NSObject
@property (nonatomic) q version;
@property (nonatomic) double timestamp;
@property (nonatomic) NSData vioData;
@property (nonatomic) q vioDataType;
@property (nonatomic) Q vioSessionID;
@property (nonatomic) NSUUID anchorIdentifier;
@property (nonatomic) NSSet anchors;
@property (nonatomic) q priority;
- (long long)version;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)timestamp;
- (long long)priority;
- (id)anchors;
- (void)setAnchors:;
- (unsigned long long)vioSessionID;
- (id)anchorIdentifier;
- (void)setAnchorIdentifier:;
- (id)initWithVIOData:type:sessionID:;
- (id)vioData;
- (long long)vioDataType;
+ (BOOL)supportsSecureCoding;
@end
