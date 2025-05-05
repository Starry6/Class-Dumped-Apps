@interface IESECADTrackContextObject : NSObject
@property (nonatomic) NSString event;
@property (nonatomic) NSString label;
@property (nonatomic) NSDictionary adExtraData;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSString refer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAdExtraData:;
- (id)adExtraData;
- (id)logExtra;
- (void)setCreativeID:;
- (void)setExtra:;
- (void)setLogExtra:;
- (void)setGroupID:;
- (id)groupID;
- (id)extra;
- (void)setEvent:;
- (id)event;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)creativeID;
@end
