@interface IESLiveInnerPbPBResponse : GPBMessage
@property (nonatomic) IESLiveInnerPbPBResponse_Header header;
@property (nonatomic) BOOL hasHeader;
@property (nonatomic) NSData body;
+ (id)descriptor;
@end
