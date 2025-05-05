@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage
- (unsigned long long)byteOffset;
- (unsigned char)command;
- (unsigned char)type;
- (unsigned char)cancelReason;
+ (id)resumeMessageWithSequenceNumber:streamID:messageUUID:nextByteOffset:;
+ (id)cancelMessageWithSequenceNumber:streamID:messageUUID:cancelReason:;
@end
