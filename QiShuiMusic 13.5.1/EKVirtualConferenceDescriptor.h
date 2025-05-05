@interface EKVirtualConferenceDescriptor : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSArray URLDescriptors;
@property (nonatomic) NSString conferenceDetails;
- (id)title;
- (void).cxx_destruct;
- (id)conferenceDetails;
- (id)initWithTitle:URLDescriptors:conferenceDetails:;
- (id)URLDescriptors;
@end
